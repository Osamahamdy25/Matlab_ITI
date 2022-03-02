function TraceInfoFlag() {
    this.traceFlag = new Array();
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Math_Calculator.c:34"]=1;
    this.lineTraceFlag["Math_Calculator.c:41"]=1;
    this.lineTraceFlag["Math_Calculator.c:47"]=1;
    this.lineTraceFlag["Math_Calculator.c:53"]=1;
    this.lineTraceFlag["Math_Calculator.h:36"]=1;
    this.lineTraceFlag["Math_Calculator.h:37"]=1;
    this.lineTraceFlag["Math_Calculator.h:38"]=1;
    this.lineTraceFlag["Math_Calculator.h:39"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
