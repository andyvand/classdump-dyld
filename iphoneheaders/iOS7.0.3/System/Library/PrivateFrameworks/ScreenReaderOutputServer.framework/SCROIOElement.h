/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <ScreenReaderOutput/SCROIOElementProtocol.h>
#import <CoreFoundation/NSCopying.h>

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {

	unsigned _ioObject;
	long _identifier;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(long)identifier;
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned)ioObject;
@end
