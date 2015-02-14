/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAnnotation.h>
#import <PDFKit/NSCopying.h>

@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {

	PDFAnnotationButtonWidgetPrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(unsigned)parentID;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
-(id)caption;
-(void)setCaption:(id)arg1 ;
-(void)setControlType:(long long)arg1 ;
-(long long)controlType;
-(void)setFieldName:(id)arg1 ;
-(id)fieldName;
-(void)drawWithBox:(int)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)font;
-(void)setFont:(id)arg1 ;
-(id)backgroundColor;
-(void)setView:(id)arg1 ;
-(char)isHighlighted;
-(void)setHighlighted:(char)arg1 ;
-(id)toolTip;
-(int)rotation;
-(void)setRotation:(int)arg1 ;
-(id)tooltipString;
-(id)formData;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(void)secondaryInit;
-(CFDictionaryRef)commonCreateDictionaryRef;
-(void)setOnStateValue:(id)arg1 ;
-(char)allowsToggleToOff;
-(void)setAllowsToggleToOff:(char)arg1 ;
-(id)onStateValue;
-(id)appearanceCharacteristics;
-(void)setAppearanceCharacteristics:(id)arg1 ;
-(void)updateFormData;
-(void)drawPushButton:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawRadioButton:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawCheckBox:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(id)rolloverCaption;
-(void)setRolloverCaption:(id)arg1 ;
-(id)downCaption;
-(void)setDownCaption:(id)arg1 ;
-(void)addNormalAndDownAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAndDownAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)addNormalAppearanceWithStateToDictionaryRef:(CFDictionaryRef)arg1 ;
-(void)setTooltipString:(id)arg1 ;
@end

