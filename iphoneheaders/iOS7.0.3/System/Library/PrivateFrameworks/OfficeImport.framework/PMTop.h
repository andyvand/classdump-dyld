/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:33 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMTop.h>
#import <OfficeImport/OIProgressiveReaderDelegate.h>

@class CMArchiveManager, PMState, PMPresentationMapper;

@interface PMTop : CMTop <OIProgressiveReaderDelegate> {

	CMArchiveManager* _archiver;
	PMState* _state;
	PMPresentationMapper* _mapper;
	BOOL _xml;

}
+(void)fillHTMLArchiveForPowerPointFrom:(id)arg1 inMemory:(BOOL)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
+(void)fillHTMLArchiveForPowerPointFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3 ;
+(void)fillHTMLArchiveForPowerPointData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)readFile:(id)arg1 xmlFlag:(BOOL)arg2 archiver:(id)arg3 ;
-(void)readData:(id)arg1 fileName:(id)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
-(void)readerDidStartDocument:(id)arg1 withElementCount:(int)arg2 ;
-(void)readerDidReadElement:(id)arg1 atIndex:(unsigned)arg2 inDocument:(id)arg3 isLastElement:(BOOL)arg4 ;
-(void)readerDidEndDocument:(id)arg1 ;
-(void)readFrom:(id)arg1 inMemory:(BOOL)arg2 xmlFlag:(BOOL)arg3 archiver:(id)arg4 ;
@end
