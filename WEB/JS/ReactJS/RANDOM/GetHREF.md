function App() {

  const href = window.location.href
  const url = new URL(href)

  return (
    <>
      <h1>{url.pathname}</h1>
    </>


  );

}

export default App;

[1607202a-447b-4ee1-af12-8b8b4bae3e35.webm](https://github.com/user-attachments/assets/06537175-870e-4bf8-aaa5-50f6d162c89a)
