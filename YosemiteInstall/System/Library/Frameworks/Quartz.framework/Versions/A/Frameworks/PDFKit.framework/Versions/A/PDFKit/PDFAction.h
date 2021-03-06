/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/NSCopying.h>

@class PDFActionPrivateVars;

@interface PDFAction : NSObject <NSCopying> {

	PDFActionPrivateVars* _pdfPriv;

}
+(Class)classForActionDictionary:(CGPDFDictionaryRef)arg1 ;
+(id)actionWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)commonInit;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)type;
-(id)toolTip;
-(void)setType:(id)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(id)nextActions;
-(void)setNextActions:(id)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)setNextAction:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)setNextActions:(CGPDFArrayRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(id)baseURLForDocument:(id)arg1 ;
@end

