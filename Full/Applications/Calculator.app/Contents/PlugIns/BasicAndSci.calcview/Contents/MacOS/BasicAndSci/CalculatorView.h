/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calculator.app/Contents/PlugIns/BasicAndSci.calcview/Contents/MacOS/BasicAndSci
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalculatorView <NSObject>
@optional
-(void)setOperandIndicatorState:(id)arg1;
-(void)setMemoryIndicatorOn:(char)arg1;
-(void)handleConversion:(id)arg1;
-(void)handleStringFromCalcEngine:(id)arg1;

@required
-(CGSize*)minimumSize:(id)arg1;
-(CGSize*)maximumSize:(id)arg1;
-(id)nameForSaveMenu:(id)arg1;
-(id)nameForPrintMenu:(id)arg1;
-(char)supportsSpeech;
-(void)rpnRollUp;
-(void)rpnRollDown;
-(void)rpnDrop;
-(void)rpnExchange;
-(char)supportsRPN;
-(void)setRPNMode:(char)arg1;
-(char)rpnViewIsWide;
-(id)rpnStack;
-(char)supportsConversions;
-(char)readyForConversion;
-(void)setCalcController:(id)arg1;
-(void)setSpeechController:(id)arg1;
-(void)setLCDDisplay:(id)arg1;
-(void)setPaperTape:(id)arg1;
-(CGSize*)normalSize:(id)arg1;
-(void)removeAllViewsFromWindow:(id)arg1;
-(void)addView:(id)arg1 toWindow:(id)arg2 atPoint:(CGPoint)arg3;
-(void)setupResponderStatus:(id)arg1;
-(char)shouldShowDisplay:(id)arg1;
-(char)canShowTape:(id)arg1;
-(id)viewNames:(id)arg1;
-(char)supportsDisplayModeChanges;
-(void)setPrecision:(unsigned long long)arg1;
-(void)setInitialValue:(id)arg1;

@end

