/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:34 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/PDFKit.framework/Versions/A/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <PDFKit/NSCopying.h>

@class PDFActionRemoteGoToPrivateVars;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {

	PDFActionRemoteGoToPrivateVars* _pdfPriv2;

}
-(void)commonInit;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toolTip;
-(void)setURL:(id)arg1 ;
-(CFDictionaryRef)createDictionaryRef;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(void)lazyInit;
-(id)finishInitWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)initWithPageIndex:(unsigned long long)arg1 atPoint:(CGPoint)arg2 fileURL:(id)arg3 ;
@end

