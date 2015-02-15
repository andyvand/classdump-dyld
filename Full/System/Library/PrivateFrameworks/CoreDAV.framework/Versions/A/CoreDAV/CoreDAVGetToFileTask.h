/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {

	NSFileHandle* _destinationFile;

}

@property (nonatomic,retain) NSFileHandle * destinationFile;              //@synthesize destinationFile=_destinationFile - In the implementation block
-(void)dealloc;
-(id)initWithURL:(id)arg1 destinationFile:(id)arg2 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(char)shouldLogResponseBody;
-(NSFileHandle *)destinationFile;
-(void)setDestinationFile:(NSFileHandle *)arg1 ;
@end

