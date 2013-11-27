/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:44:04 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSCHNotifyOnModify.h>
#import <iWorkImport/TSCHMediatorProvider.h>

@class TSCHChartMediator;

@interface TSCHPersistentChartMediator : TSPObject <TSCHNotifyOnModify, TSCHMediatorProvider> {

	TSCHChartMediator* mMediator;

}

@property (nonatomic,readonly) TSCHChartMediator * mediator; 
-(void)saveToArchive:(ChartMediatorArchive*)arg1 ;
-(id)mediator;
-(void)loadFromArchive:(const ChartMediatorArchive*)arg1 ;
-(id)initWithContext:(id)arg1 andMediator:(id)arg2 ;
-(void)dealloc;
@end
