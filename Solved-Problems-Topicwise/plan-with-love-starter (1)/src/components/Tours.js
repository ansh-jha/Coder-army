import Card from "./Card";
function Tours({tours, removeTour}) {

    return(
        <div className="container">
        <div>
            <h2 className="title">Plan with Ansh</h2>
        </div>
        <div className="cards">
            {
                tours.map( (tour) => {
                    //{...tour} 'Tour' object ka copy pass hota h
                    // we pass key wheneer we use map function.
                    return <Card key= {tour.id} {...tour} removeTour={removeTour}></Card>
                })
            }
        </div>
    </div>
    );
}

export default Tours;