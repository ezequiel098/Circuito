resp = ""


for i in range(8, 79):
    resp += "\nvoid MainWindow::on_pushButton_"+ str(i) +"_clicked(){\n"
    resp += "    alterarEstadoBotoes(ui->pushButton_"+ str(i) +");\n"
    resp += "}\n"

#for i in range(8, 79):
#    resp += "    void on_pushButton_"+ str(i) +"_clicked();\n"

print resp