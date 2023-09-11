/** @type {import('tailwindcss').Config} */
module.exports = {
  content: [
    './src/pages/**/*.{js,ts,jsx,tsx,mdx}',
    './src/components/**/*.{js,ts,jsx,tsx,mdx}',
    './src/app/**/*.{js,ts,jsx,tsx,mdx}',
  ],
  theme: {
    extend: {
      backgroundImage: {
        'gradient-radial': 'radial-gradient(var(--tw-gradient-stops))',
        'gradient-conic':
          'conic-gradient(from 180deg at 50% 50%, var(--tw-gradient-stops))',
      },
      fontFamily: {
        'sans': ['Montserrat', 'sans-serif'],
      },
      colors: {
        'mike-grey': '#E6E6E6',
        'mike-dark-grey': '#757575',
        'mike-dark-black-grey': '#5E5E5E',
        'mike-gray-card': '#B3B3B3',
        'mike-orange': '#FFA629',
        'mike-beige': '#FFE8A3',
        'mike-blue': '#0D99FF',
        'mike-blue-dark': '#4D1F89',
        'mike-blue-light': '#a48dc2',
        'mike-purple': '#9747FF',
        'mike-purple-light': '#E4CCFF',
        'mike-purple-dark': '#3E196E',
        'mike-main-bg': '#fbfbfb',
        'new-blue':  "#2a9aff",
        'mike-green':  "#aff4c6",
        'goat-gray': "#969BAB",
        'goat-gray-20': "#F4F5F7",
        'goat-gray-50': "#EEEFF4",
        'goat-gray-70': "#9FA4B4",
        'goat-gray-90': "#9FA4B460",
        'goat-dark-gray': '#474A57',
        'goat-black': "#18191F",
        'goat-black-10': '#00142910',
        'goat-purple': "#4D1F89",
        'goat-purple-800': "#702DC8",
        'goat-purple-700': "#9059D9",
        'goat-purple-600': "#B28BE5",
        'goat-purple-500': " #D3BCF0",
        'goat-purple-400': "#F4EEFB",
        'goat-error-red': "#D92D21",
        'goat-error-red-700': "#F44336",
        'goat-dark-green': "#388E3C",
        'goat-green': "#4CAF50",
        'goat-inactive': '#F2F3F7',
        'goat-active': '#45539D',
        'goat-white': '#FFF'
      },
    },
  },
  plugins: [],
}
