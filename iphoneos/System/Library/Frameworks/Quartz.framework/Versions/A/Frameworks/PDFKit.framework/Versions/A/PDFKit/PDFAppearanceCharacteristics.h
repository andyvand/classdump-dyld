/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSCopying.h>

@class PDFAppearanceCharacteristicsPrivateVars;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {

	PDFAppearanceCharacteristicsPrivateVars* _pdfPriv;

}
-(id)caption;
-(void)setCaption:(id)arg1 ;
-(void)setFlavor:(long long)arg1 ;
-(long long)flavor;
-(id)init;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(char)accessibilityIsIgnored;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(CGPDFFormRef)arg1 ;
-(CGPDFFormRef)icon;
-(id)borderColor;
-(void)setBorderColor:(id)arg1 ;
-(id)backgroundColor;
-(int)rotation;
-(void)setRotation:(int)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forFlavor:(long long)arg2 ;
-(char)scaleProportional;
-(id)rolloverCaption;
-(void)setRolloverCaption:(id)arg1 ;
-(id)downCaption;
-(void)setDownCaption:(id)arg1 ;
-(int)scaleCircumstance;
-(void)setScaleCircumstance:(int)arg1 ;
-(void)setScaleProportional:(char)arg1 ;
-(void)addColor:(id)arg1 forKey:(CFStringRef)arg2 toDictionaryRef:(CFDictionaryRef)arg3 ;
@end
