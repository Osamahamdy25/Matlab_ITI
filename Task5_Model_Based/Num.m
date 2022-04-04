classdef Num <  Simulink.IntEnumType 
    enumeration 
        ZERO(0)
        One(1) 
        Two(2)
    end      
    methods(Static)
        function retVal = getDefaultValue() 
            retVal=Num.One;
        end
    end
end
