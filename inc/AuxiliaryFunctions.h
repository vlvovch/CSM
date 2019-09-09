void PrintData(const vector<FittedQuantity> &fitQuant, string name = "") {
    cout << "The ";
    if (name.size() != 0)
        cout << name << " ";
    cout << "data to fit:" << endl;
    for(int i = 0; i < fitQuant.size(); ++i) {
        if (fitQuant[i].toFit) {
            if (fitQuant[i].type == FittedQuantity::Multiplicity) {
                cout << setw(15) << fitQuant[i].mult.fPDGID 
                    << setw(15) << fitQuant[i].Value() 
                    << " +- " << fitQuant[i].ValueError() << endl;
            }
            else {
                cout << setw(15) << fitQuant[i].ratio.fPDGID1 << "/" << fitQuant[i].ratio.fPDGID2
                    << setw(15) << fitQuant[i].Value() 
                    << " +- " << fitQuant[i].ValueError() << endl;
            }
        }
    }
    cout << endl;
}
