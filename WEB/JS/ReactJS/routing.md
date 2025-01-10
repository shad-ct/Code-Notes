

## useParams

```
in <Route path = "details/:userId" element= {<Details ?> } ?>

  <Link to = {`/details/${item.id}}> {item.name} </Link>

in the file to show the item id :


const {itemId} = userParams();
```

## URL and Search Parameters
```
localhost:5173/users?class=10

const [searchParamas, setSearchParams] = useSearchParams();
const cls = searchParams.get('class'):

output : 10



{data 
    .filter((item) => {
        if (!cls) {
            return true;
        }
        return cls === item.class;
    });
}

```
