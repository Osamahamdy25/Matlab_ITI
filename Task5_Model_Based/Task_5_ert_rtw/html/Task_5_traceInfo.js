function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Task_5"};
	this.sidHashMap["Task_5"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Task_5:1"};
	this.sidHashMap["Task_5:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Task_5:9"};
	this.sidHashMap["Task_5:9"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Data Type Conversion"] = {sid: "Task_5:8"};
	this.sidHashMap["Task_5:8"] = {rtwname: "<Root>/Data Type Conversion"};
	this.rtwnameHashMap["<Root>/Data Type Conversion1"] = {sid: "Task_5:4"};
	this.sidHashMap["Task_5:4"] = {rtwname: "<Root>/Data Type Conversion1"};
	this.rtwnameHashMap["<Root>/Enumerated Constant"] = {sid: "Task_5:1"};
	this.sidHashMap["Task_5:1"] = {rtwname: "<Root>/Enumerated Constant"};
	this.rtwnameHashMap["<Root>/Mux"] = {sid: "Task_5:6"};
	this.sidHashMap["Task_5:6"] = {rtwname: "<Root>/Mux"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "Task_5:2"};
	this.sidHashMap["Task_5:2"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<S1>/Constant"] = {sid: "Task_5:1:158"};
	this.sidHashMap["Task_5:1:158"] = {rtwname: "<S1>/Constant"};
	this.rtwnameHashMap["<S1>/Out"] = {sid: "Task_5:1:159"};
	this.sidHashMap["Task_5:1:159"] = {rtwname: "<S1>/Out"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
