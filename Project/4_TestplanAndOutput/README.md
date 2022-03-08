##  High Level Test Plan

|**Test ID**|**Description**|**Exp input**|**Exp output**|**Actual Output**|
|----|----|----|---|---|
|H_01|	smart sitting chair sense at office|	Choice|SUCCESS|	SUCCESS
|H_02|	smart sitting chair sense at company|	Choice|	SUCCESS|	SUCCESS
|H_03|	Units consumed per hour|	Choice|	SUCCESS|	SUCCESS
|H_04|	Calculates total work loads|	Choice|	SUCCESS|	SUCCESS

## Low Level Test Plan

|**Test ID**|**HL_ID**|**Description**|**Exp input**|**Exp Output**|**Actual Output**|
|---|---|---|---|---|---|
|L_01|	H_01|smart sitting chair sense at office|	22 units|	71.5 rupees|	71.5 rupees
|L_02|	H_01|	smart sitting chair sense at office(units>30 && units <100)|	50|	235|	235
|L_03|	H_01|	smart sitting chair sense at office(units>101 && units <200)|	150|	937.5|	937.5
|L_04|	H_01|	smart sitting chair sense at office(units<200)|	230|	1,679	|1,679
|L_05|	H_02|	smart sitting chair sense at officef(units<30)|	12	|37.8  |   37.8
|L_06|	H_02|	smart sitting chair sense at office(units>30 && units <100)|	67	|294.8	|294.8
|L_07|	H_02|	smart sitting chair sense at office(units>101 && units <200)|	134|	797.3	|797.3
|L_08|	H_02|	smart sitting chair sense at office(units<200)|	344	|2,339.2| 2,339.2
