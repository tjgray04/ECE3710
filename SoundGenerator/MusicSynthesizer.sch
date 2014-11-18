<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk" />
        <signal name="clr" />
        <signal name="XLXN_3" />
        <signal name="XLXN_5(2:0)" />
        <signal name="XLXN_6" />
        <signal name="sound" />
        <signal name="XLXN_12(22:0)" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="clr" />
        <port polarity="Output" name="sound" />
        <blockdef name="pulse_generator">
            <timestamp>2013-4-24T23:41:52</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="Duration_FSM">
            <timestamp>2013-4-24T23:43:28</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
        </blockdef>
        <blockdef name="song_library">
            <timestamp>2013-4-24T23:42:14</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="sound_generator">
            <timestamp>2013-4-24T23:43:10</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
        </blockdef>
        <block symbolname="pulse_generator" name="XLXI_3">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="clr" name="clr" />
            <blockpin signalname="XLXN_3" name="enable" />
        </block>
        <block symbolname="Duration_FSM" name="XLXI_4">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="clr" name="clr" />
            <blockpin signalname="XLXN_3" name="enable" />
            <blockpin signalname="XLXN_5(2:0)" name="duration(2:0)" />
            <blockpin signalname="XLXN_6" name="nextNote" />
        </block>
        <block symbolname="song_library" name="XLXI_5">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="clr" name="clr" />
            <blockpin signalname="XLXN_6" name="nextNote" />
            <blockpin signalname="XLXN_5(2:0)" name="duration(2:0)" />
            <blockpin signalname="XLXN_12(22:0)" name="ticks(22:0)" />
        </block>
        <block symbolname="sound_generator" name="XLXI_7">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="clr" name="clr" />
            <blockpin signalname="XLXN_12(22:0)" name="ticks(22:0)" />
            <blockpin signalname="sound" name="sound" />
        </block>
        <block symbolname="Duration_FSM" name="XLXI_8">
            <blockpin name="clk" />
            <blockpin name="clr" />
            <blockpin name="enable" />
            <blockpin name="duration(2:0)" />
            <blockpin name="nextNote" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="624" y="768" name="XLXI_3" orien="R0">
        </instance>
        <instance x="1520" y="688" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1520" y="1328" name="XLXI_5" orien="R0">
        </instance>
        <instance x="2720" y="640" name="XLXI_7" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="512" y1="672" y2="672" x1="368" />
            <wire x2="624" y1="672" y2="672" x1="512" />
            <wire x2="512" y1="464" y2="672" x1="512" />
            <wire x2="1360" y1="464" y2="464" x1="512" />
            <wire x2="1520" y1="464" y2="464" x1="1360" />
            <wire x2="1360" y1="464" y2="1168" x1="1360" />
            <wire x2="1520" y1="1168" y2="1168" x1="1360" />
            <wire x2="1360" y1="304" y2="464" x1="1360" />
            <wire x2="2640" y1="304" y2="304" x1="1360" />
            <wire x2="2640" y1="304" y2="480" x1="2640" />
            <wire x2="2720" y1="480" y2="480" x1="2640" />
        </branch>
        <branch name="clr">
            <wire x2="512" y1="736" y2="736" x1="400" />
            <wire x2="512" y1="736" y2="1232" x1="512" />
            <wire x2="1520" y1="1232" y2="1232" x1="512" />
            <wire x2="624" y1="736" y2="736" x1="512" />
            <wire x2="512" y1="720" y2="736" x1="512" />
            <wire x2="560" y1="720" y2="720" x1="512" />
            <wire x2="560" y1="528" y2="720" x1="560" />
            <wire x2="1424" y1="528" y2="528" x1="560" />
            <wire x2="1520" y1="528" y2="528" x1="1424" />
            <wire x2="1424" y1="336" y2="528" x1="1424" />
            <wire x2="2560" y1="336" y2="336" x1="1424" />
            <wire x2="2560" y1="336" y2="544" x1="2560" />
            <wire x2="2720" y1="544" y2="544" x1="2560" />
        </branch>
        <branch name="XLXN_3">
            <wire x2="1264" y1="672" y2="672" x1="1008" />
            <wire x2="1264" y1="592" y2="672" x1="1264" />
            <wire x2="1520" y1="592" y2="592" x1="1264" />
        </branch>
        <branch name="XLXN_5(2:0)">
            <wire x2="1520" y1="656" y2="656" x1="1504" />
            <wire x2="1504" y1="656" y2="928" x1="1504" />
            <wire x2="1936" y1="928" y2="928" x1="1504" />
            <wire x2="1936" y1="928" y2="1168" x1="1936" />
            <wire x2="1936" y1="1168" y2="1168" x1="1904" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="1520" y1="1296" y2="1296" x1="1456" />
            <wire x2="1456" y1="1296" y2="1392" x1="1456" />
            <wire x2="1984" y1="1392" y2="1392" x1="1456" />
            <wire x2="1984" y1="464" y2="464" x1="1904" />
            <wire x2="1984" y1="464" y2="1392" x1="1984" />
        </branch>
        <iomarker fontsize="28" x="400" y="736" name="clr" orien="R180" />
        <branch name="sound">
            <wire x2="3136" y1="480" y2="480" x1="3104" />
        </branch>
        <iomarker fontsize="28" x="3136" y="480" name="sound" orien="R0" />
        <iomarker fontsize="28" x="368" y="672" name="clk" orien="R180" />
        <branch name="XLXN_12(22:0)">
            <wire x2="2304" y1="1296" y2="1296" x1="1904" />
            <wire x2="2304" y1="608" y2="1296" x1="2304" />
            <wire x2="2720" y1="608" y2="608" x1="2304" />
        </branch>
        <instance x="1584" y="1856" name="XLXI_8" orien="R0">
        </instance>
    </sheet>
</drawing>