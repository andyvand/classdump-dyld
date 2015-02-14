/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calculator.app/Contents/PlugIns/BasicAndSci.calcview/Contents/MacOS/BasicAndSci
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BasicAndSci/BasicAndSci-Structs.h>
#import <AppKit/NSResponder.h>
#import <BasicAndSci/CalculatorView.h>

@protocol LCDViewable, PaperTape, SpeechProtocol;
@class NSBox, NSPanel, NSButton, CalculatorEngine, CalculatorController, NSObject, NSMutableString, NSArray, NSString, NSFont, NSDictionary;

@interface BasicAdvancedController : NSResponder <CalculatorView> {

	NSBox* _AdvancedFunctionsBox;
	NSBox* _BasicFunctionsBox;
	NSPanel* _Panel;
	NSButton* _0_Button;
	NSButton* _1_Button;
	NSButton* _2_Button;
	NSButton* _3_Button;
	NSButton* _4_Button;
	NSButton* _5_Button;
	NSButton* _6_Button;
	NSButton* _7_Button;
	NSButton* _8_Button;
	NSButton* _9_Button;
	NSButton* _DecimalPointButton;
	NSButton* _ClearButton;
	NSButton* _EqualButton;
	NSButton* _AdditionButton;
	NSButton* _MultiplicationButton;
	NSButton* _SubtractionButton;
	NSButton* _DivisionButton;
	NSButton* _NegateButton;
	NSButton* _MemPlusButton;
	NSButton* _MemClearButton;
	NSButton* _MemMinusButton;
	NSButton* _MemRecallButton;
	NSButton* _XSquaredButton;
	NSButton* _XCubedButton;
	NSButton* _XToTheYButton;
	NSButton* _eToTheXButton;
	NSButton* _tenToTheXButton;
	NSButton* _XFactorial_button;
	NSButton* _OneOverXButton;
	NSButton* _PercentButton;
	NSButton* _SquareRootButton;
	NSButton* _CubeRootButton;
	NSButton* _nthRootButton;
	NSButton* _ExponentialButton;
	NSButton* _SineButton;
	NSButton* _CosineButton;
	NSButton* _TangentButton;
	NSButton* _HyperSinButton;
	NSButton* _HyperCosButton;
	NSButton* _HyperTanButton;
	NSButton* _LogButton;
	NSButton* _Log2Button;
	NSButton* _lnButton;
	NSButton* _PiButton;
	NSButton* _EButton;
	NSButton* _ModeButton;
	NSButton* _ParenRightButton;
	NSButton* _ParenLeftButton;
	NSButton* _SecondFunctionButton;
	NSButton* _RandomNumberButton;
	NSButton* _EEButton;
	CalculatorEngine* __Engine;
	CalculatorController* __CalcController;
	NSObject*<LCDViewable> __LCD;
	NSObject*<PaperTape> __Tape;
	NSObject*<SpeechProtocol> __SpeechController;
	NSMutableString* __InputString;
	char __ieee;
	NSArray* __DigitButtons;
	NSString* __CurrentViewName;
	char _inSecondFunctionMode;
	NSFont* __rootButtonFont;
	NSArray* _operandButtons;
	NSDictionary* _operandButtonsDict;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)shouldInitializeClass:(id)arg1 ;
-(void)_loadRootButtonsFont;
-(void)handleSecondFunctionPress:(id)arg1 ;
-(void)momentarilyHighlightButton:(id)arg1 ;
-(void)handleOperatorPress:(id)arg1 ;
-(void)decimal:(id)arg1 ;
-(void)handleDigit:(long long)arg1 ;
-(void)unhighlightButton:(id)arg1 ;
-(void)setClearActive:(char)arg1 ;
-(void)_refreshModeIndicator;
-(void)pinBasicToView:(id)arg1 ;
-(void)pinAdvancedToView:(id)arg1 ;
-(void)setOperandIndicatorState:(id)arg1 ;
-(void)enableAllOperandButtons;
-(CGSize)minimumSize:(id)arg1 ;
-(CGSize)maximumSize:(id)arg1 ;
-(id)nameForSaveMenu:(id)arg1 ;
-(id)nameForPrintMenu:(id)arg1 ;
-(char)supportsSpeech;
-(void)setMemoryIndicatorOn:(char)arg1 ;
-(void)_setRootTitle:(id)arg1 onButton:(id)arg2 ;
-(void)digit:(id)arg1 ;
-(void)handleMemoryOperatorPress:(id)arg1 ;
-(void)handleAllClearPress:(id)arg1 ;
-(void)handleEEPress:(id)arg1 ;
-(void)handleModePress:(id)arg1 ;
-(char)supportsIEEEMode;
-(void)setIEEEMode:(char)arg1 ;
-(char)ieeeMode;
-(void)_negateString:(id)arg1 ;
-(void)rpnRollUp;
-(void)rpnRollDown;
-(void)rpnDrop;
-(void)rpnExchange;
-(char)supportsRPN;
-(void)setRPNMode:(char)arg1 ;
-(char)rpnViewIsWide;
-(id)rpnStack;
-(void)logState;
-(char)supportsConversions;
-(char)readyForConversion;
-(void)setCalcController:(id)arg1 ;
-(void)setSpeechController:(id)arg1 ;
-(void)setLCDDisplay:(id)arg1 ;
-(void)setPaperTape:(id)arg1 ;
-(CGSize)normalSize:(id)arg1 ;
-(void)removeAllViewsFromWindow:(id)arg1 ;
-(void)addView:(id)arg1 toWindow:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)setupResponderStatus:(id)arg1 ;
-(char)shouldShowDisplay:(id)arg1 ;
-(char)canShowTape:(id)arg1 ;
-(id)viewNames:(id)arg1 ;
-(char)supportsDisplayModeChanges;
-(void)handleConversion:(id)arg1 ;
-(void)keyboardModifiersChangedTo:(unsigned long long)arg1 ;
-(void)delete;
-(void)setPrecision:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)window;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)awakeFromNib;
-(void)setInitialValue:(id)arg1 ;
@end

