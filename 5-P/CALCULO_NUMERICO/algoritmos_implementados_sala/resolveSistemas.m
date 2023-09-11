function x = solve_linear_system(A, b)
    [n, m] = size(A);

    if n != m
        error("A matriz não é quadrada.");
    end

    is_upper_triangular = istriu(A);
    is_lower_triangular = istril(A);

    if is_upper_triangular
        x = solve_upper_triangular(A, b);
    elseif is_lower_triangular
        x = solve_lower_triangular(A, b);
    else
        [L, U, P] = lu(A);
        y = solve_lower_triangular(L, P*b);
        x = solve_upper_triangular(U, y);
    end
end

function x = solve_upper_triangular(U, b)
    n = length(b);
    x = zeros(n, 1);
    for i = n:-1:1
        x(i) = (b(i) - U(i, i+1:end) * x(i+1:end)) / U(i, i);
    end
end

function x = solve_lower_triangular(L, b)
    n = length(b);
    x = zeros(n, 1);
    for i = 1:n
        x(i) = (b(i) - L(i, 1:i-1) * x(1:i-1)) / L(i, i);
    end
end
