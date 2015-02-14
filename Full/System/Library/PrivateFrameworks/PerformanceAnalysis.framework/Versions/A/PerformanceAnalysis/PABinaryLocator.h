/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:14:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
@class NSMutableDictionary;

@interface PABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	char _dirty;

}
+(id)getRetainedSharedBinaryLocator;
-(char)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(id)urlForUUID:(id)arg1 ;
-(char)removeURLForUUID:(id)arg1 ;
-(id)initSharedBinaryLocator;
-(id)mappings;
-(char)addURL:(id)arg1 ForUUID:(id)arg2 ;
-(id)init;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(void)saveMappings;
@end

