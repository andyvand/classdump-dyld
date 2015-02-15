/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:05:17 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SDNetworkEjecterDelegate;
#import <sharingd/sharingd-Structs.h>
@class NSNumber, NSString;

@interface SDNetworkEjecter : NSObject {

	SFNodeRef _node;
	int _mountedCount;
	int _ejectedCount;
	NSNumber* _flags;
	NSString* _protocol;
	id<SDNetworkEjecterDelegate> _delegate;

}

@property (copy) NSNumber * flags;                                     //@synthesize flags=_flags - In the implementation block
@property (copy) NSString * protocol;                                  //@synthesize protocol=_protocol - In the implementation block
@property (__weak) id<SDNetworkEjecterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)notifyClientAboutEject:(int)arg1 ;
-(void)ejectMountPoints:(id)arg1 useAssistant:(char)arg2 ;
-(NSString *)protocol;
-(void)setFlags:(NSNumber *)arg1 ;
-(void)setProtocol:(NSString *)arg1 ;
-(void)setDelegate:(id<SDNetworkEjecterDelegate>)arg1 ;
-(void)dealloc;
-(void)stop;
-(int)start;
-(id<SDNetworkEjecterDelegate>)delegate;
-(void)eject;
-(id)initWithNode:(SFNodeRef)arg1 ;
-(NSNumber *)flags;
@end
