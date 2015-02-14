/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QTKit/QTKit-Structs.h>
#import <QTKit/QTImageConsumer.h>

@class NSString;

@interface QTLogRenderer : NSObject <QTImageConsumer> {

	NSString* _name;
	void* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flushImageBuffersAfterHostTime:(unsigned long long)arg1 ;
-(void)setImageBuffer:(CVBufferRef)arg1 forHostTime:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
@end

