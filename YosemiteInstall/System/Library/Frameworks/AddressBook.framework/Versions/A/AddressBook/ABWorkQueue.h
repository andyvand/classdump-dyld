/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:54:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol ABWorkQueueDelegate;
@class NSObject;

@interface ABWorkQueue : NSOperationQueue {

	NSObject*<ABWorkQueueDelegate> _delegate;

}

@property (retain) NSObject*<ABWorkQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)operationCountDidChange:(unsigned long long)arg1 ;
-(id)init;
-(void)setDelegate:(NSObject*<ABWorkQueueDelegate>)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<ABWorkQueueDelegate>)delegate;
@end

