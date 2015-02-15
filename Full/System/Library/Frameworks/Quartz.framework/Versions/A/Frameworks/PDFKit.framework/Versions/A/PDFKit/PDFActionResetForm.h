/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <PDFKit/NSCopying.h>

@class PDFActionResetFormPrivateVars;

@interface PDFActionResetForm : PDFAction <NSCopying> {

	PDFActionResetFormPrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toolTip;
-(CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)fields;
-(void)setFields:(id)arg1 ;
-(char)fieldsIncludedAreCleared;
-(void)setFieldsIncludedAreCleared:(char)arg1 ;
-(void)addFieldsToDictionaryRef:(CFDictionaryRef)arg1 ;
@end

