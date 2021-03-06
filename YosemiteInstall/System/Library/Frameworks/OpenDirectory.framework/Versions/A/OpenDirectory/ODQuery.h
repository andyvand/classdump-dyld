/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:52:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/OpenDirectory.framework/Versions/A/OpenDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpenDirectory/OpenDirectory-Structs.h>
#import <OpenDirectory/NSCopying.h>

@class NSOperationQueue;

@interface ODQuery : NSObject <NSCopying> {

	void* _internal;

}

@property (assign,nonatomic) id<ODQueryDelegate> delegate; 
@property (retain) NSOperationQueue * operationQueue; 
+(id)queryWithNode:(id)arg1 forRecordTypes:(id)arg2 attribute:(id)arg3 matchType:(unsigned)arg4 queryValues:(id)arg5 returnAttributes:(id)arg6 maximumResults:(long long)arg7 error:(id*)arg8 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(unsigned long long)_cfTypeID;
-(id)resultsAllowingPartial:(char)arg1 error:(id*)arg2 ;
-(id)initWithNode:(id)arg1 forRecordTypes:(id)arg2 attribute:(id)arg3 matchType:(unsigned)arg4 queryValues:(id)arg5 returnAttributes:(id)arg6 maximumResults:(long long)arg7 error:(id*)arg8 ;
-(void)setDelegate:(id<ODQueryDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(void)synchronize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<ODQueryDelegate>)delegate;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(ODQueryRef)__getODQueryRef;
@end

