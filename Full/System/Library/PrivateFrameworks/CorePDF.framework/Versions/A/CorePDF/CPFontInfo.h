/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	char valid;

}
-(id)initWithFontData:(CFDataRef)arg1 ;
-(char)getDescriptor:(SCD_Struct_CP28*)arg1 ;
-(int)kernUnitsPerEm;
-(CFDataRef)newKernData;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(float)readFloat;
-(CGRect)readRect;
-(int)readLong;
-(void)finalize;
-(void)dealloc;
-(void)dispose;
@end

