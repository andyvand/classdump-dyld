/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QTKit/QTKit-Structs.h>
@class NSString, NSMutableArray;

@interface QTExportOptionsInternal : NSObject {

	NSString* _identifier;
	char _sourceSpecified;
	char _hasVideo;
	char _hasAudio;
	NSMutableArray* _metadata;
	OpaqueRFExportRef _exportRef;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign) char sourceSpecified;                               //@synthesize sourceSpecified=_sourceSpecified - In the implementation block
@property (assign) char hasVideo;                                      //@synthesize hasVideo=_hasVideo - In the implementation block
@property (assign) char hasAudio;                                      //@synthesize hasAudio=_hasAudio - In the implementation block
@property (nonatomic,retain) NSMutableArray * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) OpaqueRFExportRef exportRef;              //@synthesize exportRef=_exportRef - In the implementation block
-(NSMutableArray *)metadata;
-(char)hasVideo;
-(char)hasAudio;
-(OpaqueRFExportRef)exportRef;
-(void)setSourceSpecified:(char)arg1 ;
-(int)_createExportRefIfNeeded;
-(void)_addMetadataItem:(id)arg1 format:(id)arg2 ;
-(void)setHasVideo:(char)arg1 ;
-(void)setHasAudio:(char)arg1 ;
-(char)sourceSpecified;
-(void)setExportRef:(OpaqueRFExportRef)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setMetadata:(NSMutableArray *)arg1 ;
@end

