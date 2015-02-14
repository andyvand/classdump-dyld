/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSArray;

@interface TabSearchFilterOperation : NSOperation {

	/*^block*/id _filterCompletionCallback;
	NSString* _filterText;
	NSArray* _tabInfo;

}

@property (nonatomic,copy,readonly) id filterCompletionCallback;              //@synthesize filterCompletionCallback=_filterCompletionCallback - In the implementation block
@property (nonatomic,readonly) NSString * filterText;                         //@synthesize filterText=_filterText - In the implementation block
@property (nonatomic,copy) NSArray * tabInfo;                                 //@synthesize tabInfo=_tabInfo - In the implementation block
-(NSString *)filterText;
-(void)_completeOperationWithIndexes:(id)arg1 ;
-(NSArray *)tabInfo;
-(id)filterCompletionCallback;
-(id)initWithTabInfoForFilteringTabs:(id)arg1 filterText:(id)arg2 completionCallback:(/*^block*/id)arg3 ;
-(void)setTabInfo:(NSArray *)arg1 ;
-(void)main;
@end

