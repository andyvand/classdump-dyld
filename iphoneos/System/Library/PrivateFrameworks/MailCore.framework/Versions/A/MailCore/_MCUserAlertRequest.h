/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface _MCUserAlertRequest : NSObject {

	NSMutableArray* _completionHandlers;
	/*^block*/id _windowProvider;

}

@property (copy) id windowProvider;                                  //@synthesize windowProvider=_windowProvider - In the implementation block
@property (copy,readonly) NSArray * completionHandlers; 
-(void)setWindowProvider:(id)arg1 ;
-(unsigned long long)countOfCompletionHandlers;
-(void)insertObject:(id)arg1 inCompletionHandlersAtIndex:(unsigned long long)arg2 ;
-(id)windowProvider;
-(NSArray *)completionHandlers;
-(id)init;
-(id)description;
@end

