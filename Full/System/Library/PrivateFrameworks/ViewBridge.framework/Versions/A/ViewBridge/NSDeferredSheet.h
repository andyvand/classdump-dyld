/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ViewBridge/ViewBridge-Structs.h>
@class NSString;

@interface NSDeferredSheet : NSObject {

	NSString* _childIdentifier;
	NSString* _parentIdentifier;
	/*^block*/id _reply;
	CGSize _size;
	char _isCritical;

}

@property (retain) NSString * childIdentifier;               //@synthesize childIdentifier=_childIdentifier - In the implementation block
@property (retain) NSString * parentIdentifier;              //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (copy) id reply;                                   //@synthesize reply=_reply - In the implementation block
@property (readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (readonly) char isCritical;                        //@synthesize isCritical=_isCritical - In the implementation block
-(NSString *)parentIdentifier;
-(void)setReply:(id)arg1 ;
-(void)setChildIdentifier:(NSString *)arg1 ;
-(void)setParentIdentifier:(NSString *)arg1 ;
-(id)initWithChildIdentifier:(id)arg1 parentIdentifier:(id)arg2 size:(CGSize)arg3 isCritical:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(NSString *)childIdentifier;
-(char)isCritical;
-(void)dealloc;
-(CGSize)size;
-(id)reply;
@end

