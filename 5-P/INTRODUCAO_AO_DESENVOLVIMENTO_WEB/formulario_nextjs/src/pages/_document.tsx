
import Sidebar from '@/app/components/SideBar'
import { Html, Head, Main, NextScript } from 'next/document'

export default function Document() {
  return (
    <Html lang="en">
    <Head />
      <body className='flex flex-row gap-16'>
        <Sidebar />
        <Main />
        <NextScript />
      </body>
    </Html>
  )
}