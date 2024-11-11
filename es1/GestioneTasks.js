let Tasks = [
    {"titolo": "Studiare italiano", "done": false},
    {"titolo": "Palestra", "done": false},
    {"titolo": "Svegliarsi", "done": true},
    {"titolo": "Esasperare la prof.ssa Marangon", "done": true},
    {"titolo": "Mangiare", "done": true},
    {"titolo": "Imparare", "done": false}
];

let elencoAzioniSvolte = document.getElementById("ul-done");
let elencoAzioniDaSvolgere = document.getElementById("ul-not-done");

let azioniSvolte = "";
let azioniDaSvolgere = "";
Tasks.forEach(task => {
    if(task.done){
        azioniSvolte += "<li>" + task.titolo + "</li>";
    }
    else{
        azioniDaSvolgere += "<li>" + task.titolo + "</li>";
    }
})

elencoAzioniSvolte.innerHTML = azioniSvolte;
elencoAzioniDaSvolgere.innerHTML = azioniDaSvolgere;