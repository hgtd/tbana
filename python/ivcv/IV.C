//void suyu_paper()
{
//=========Macro generated from canvas: c/canvas
//=========  (Fri Feb  7 19:37:01 2020) by ROOT version 6.14/04
   TCanvas *c = new TCanvas("c", "canvas",34,57,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-27.96923,-10.875,205.1077,-2.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLogy();
   c->SetLeftMargin(0.12);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("mg");
   multigraph->SetTitle(";Bias Voltage [V];Leakage Current [A]");
   
   Double_t Graph_fx1[37] = {
   0,
   0.5,
   1,
   1.5,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   12,
   14,
   16,
   18,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100,
   110,
   120,
   130};
   Double_t Graph_fy1[37] = {
   8.039441e-11,
   1.036245e-10,
   1.198168e-10,
   1.371045e-10,
   1.484998e-10,
   1.610837e-10,
   1.702573e-10,
   1.786687e-10,
   1.830839e-10,
   1.867006e-10,
   1.89893e-10,
   1.930277e-10,
   1.963213e-10,
   2.051461e-10,
   2.188818e-10,
   2.423758e-10,
   2.657699e-10,
   2.986952e-10,
   4.746011e-10,
   5.237034e-10,
   5.572012e-10,
   5.899198e-10,
   6.194634e-10,
   6.566067e-10,
   7.041704e-10,
   7.696679e-10,
   8.584264e-10,
   1.001373e-09,
   1.249686e-09,
   1.523118e-09,
   1.815266e-09,
   2.226692e-09,
   2.991541e-09,
   5.110171e-09,
   1.019881e-06,
   1.046391e-05,
   9.99748e-05};
   TGraph *graph = new TGraph(37,Graph_fx1,Graph_fy1);
   graph->SetName("Graph");
   graph->SetTitle("Plots/suyu_paper/BV60");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Plots/suyu_paper/BV60",100,0,143);
   Graph_Graph1->SetMinimum(7.235497e-11);
   Graph_Graph1->SetMaximum(0.0001099723);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   Graph_Graph1->SetLineStyle(0);
   Graph_Graph1->SetMarkerStyle(20);
   Graph_Graph1->GetXaxis()->SetNdivisions(508);
   Graph_Graph1->GetXaxis()->SetLabelFont(43);
   Graph_Graph1->GetXaxis()->SetLabelSize(24);
   Graph_Graph1->GetXaxis()->SetTitleSize(30);
   Graph_Graph1->GetXaxis()->SetTickLength(0.02);
   Graph_Graph1->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph1->GetXaxis()->SetTitleFont(43);
   Graph_Graph1->GetYaxis()->SetNdivisions(508);
   Graph_Graph1->GetYaxis()->SetLabelFont(43);
   Graph_Graph1->GetYaxis()->SetLabelSize(24);
   Graph_Graph1->GetYaxis()->SetTitleSize(30);
   Graph_Graph1->GetYaxis()->SetTickLength(0.02);
   Graph_Graph1->GetYaxis()->SetTitleFont(43);
   Graph_Graph1->GetZaxis()->SetNdivisions(508);
   Graph_Graph1->GetZaxis()->SetLabelFont(43);
   Graph_Graph1->GetZaxis()->SetLabelSize(24);
   Graph_Graph1->GetZaxis()->SetTitleSize(30);
   Graph_Graph1->GetZaxis()->SetTickLength(0.02);
   Graph_Graph1->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph1);
   
   multigraph->Add(graph,"");
   
   Double_t Graph_fx2[42] = {
   0,
   0.5,
   1,
   1.5,
   2,
   3,
   4,
   5,
   6,
   7,
   8,
   9,
   10,
   12,
   14,
   16,
   18,
   20,
   25,
   30,
   35,
   40,
   45,
   50,
   55,
   60,
   65,
   70,
   75,
   80,
   85,
   90,
   95,
   100,
   110,
   120,
   130,
   140,
   150,
   160,
   170,
   180};
   Double_t Graph_fy2[42] = {
   7.546095e-10,
   7.805508e-10,
   8.142249e-10,
   8.370993e-10,
   8.452192e-10,
   8.511771e-10,
   8.586749e-10,
   8.669446e-10,
   8.732185e-10,
   8.784332e-10,
   8.91934e-10,
   9.09525e-10,
   9.304579e-10,
   9.918343e-10,
   1.091393e-09,
   1.235977e-09,
   1.445206e-09,
   1.753454e-09,
   2.184307e-09,
   2.389144e-09,
   2.562263e-09,
   2.742771e-09,
   2.900474e-09,
   3.078055e-09,
   3.250708e-09,
   3.445513e-09,
   3.645596e-09,
   3.869463e-09,
   4.091669e-09,
   4.341881e-09,
   4.610423e-09,
   4.909034e-09,
   5.239514e-09,
   5.617111e-09,
   6.493221e-09,
   7.682006e-09,
   9.492704e-09,
   1.252931e-08,
   1.785817e-08,
   1.025666e-06,
   1.047015e-05,
   9.998291e-05};
   graph = new TGraph(42,Graph_fx2,Graph_fy2);
   graph->SetName("Graph");
   graph->SetTitle("Plots/suyu_paper/BV170");
   graph->SetFillStyle(1000);
   graph->SetLineColor(45);
   graph->SetMarkerColor(45);
   graph->SetMarkerStyle(24);
   graph->SetMarkerSize(0.6);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Plots/suyu_paper/BV170",100,0,198);
   Graph_Graph2->SetMinimum(6.791486e-10);
   Graph_Graph2->SetMaximum(0.0001099811);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   Graph_Graph2->SetLineStyle(0);
   Graph_Graph2->SetMarkerStyle(20);
   Graph_Graph2->GetXaxis()->SetNdivisions(508);
   Graph_Graph2->GetXaxis()->SetLabelFont(43);
   Graph_Graph2->GetXaxis()->SetLabelSize(24);
   Graph_Graph2->GetXaxis()->SetTitleSize(30);
   Graph_Graph2->GetXaxis()->SetTickLength(0.02);
   Graph_Graph2->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph2->GetXaxis()->SetTitleFont(43);
   Graph_Graph2->GetYaxis()->SetNdivisions(508);
   Graph_Graph2->GetYaxis()->SetLabelFont(43);
   Graph_Graph2->GetYaxis()->SetLabelSize(24);
   Graph_Graph2->GetYaxis()->SetTitleSize(30);
   Graph_Graph2->GetYaxis()->SetTickLength(0.02);
   Graph_Graph2->GetYaxis()->SetTitleFont(43);
   Graph_Graph2->GetZaxis()->SetNdivisions(508);
   Graph_Graph2->GetZaxis()->SetLabelFont(43);
   Graph_Graph2->GetZaxis()->SetLabelSize(24);
   Graph_Graph2->GetZaxis()->SetTitleSize(30);
   Graph_Graph2->GetZaxis()->SetTickLength(0.02);
   Graph_Graph2->GetZaxis()->SetTitleFont(43);
   graph->SetHistogram(Graph_Graph2);
   
   multigraph->Add(graph,"");
   multigraph->Draw("APL");
   multigraph->GetXaxis()->SetTitle("Bias Voltage [V]");
   multigraph->GetXaxis()->SetRange(1,101);
   multigraph->GetXaxis()->CenterTitle(true);
   multigraph->GetXaxis()->SetNdivisions(508);
   multigraph->GetXaxis()->SetLabelFont(43);
   multigraph->GetXaxis()->SetLabelSize(24);
   multigraph->GetXaxis()->SetTitleSize(30);
   multigraph->GetXaxis()->SetTickLength(0.02);
   multigraph->GetXaxis()->SetTitleOffset(0.9);
   multigraph->GetXaxis()->SetTitleFont(43);
   multigraph->GetYaxis()->SetTitle("Leakage Current [A]");
   multigraph->GetYaxis()->CenterTitle(true);
   multigraph->GetYaxis()->SetNdivisions(508);
   multigraph->GetYaxis()->SetLabelFont(43);
   multigraph->GetYaxis()->SetLabelSize(24);
   multigraph->GetYaxis()->SetTitleSize(30);
   multigraph->GetYaxis()->SetTickLength(0.02);
   multigraph->GetYaxis()->SetTitleFont(43);
   
   TLegend *leg = new TLegend(0.5,0.15,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(43);
   leg->SetTextSize(30);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","BV60","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(43);
   entry=leg->AddEntry("Graph","BV170","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(45);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(45);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.6);
   entry->SetTextFont(43);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
//}
