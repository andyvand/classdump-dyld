/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:32:49 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKDistributionContainer.h>

@class NSError;

@interface PKMutableDistributionContainer : PKDistributionContainer {

	NSError* _error;

}

@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initForWritingToPath:(id)arg1 ;
-(id)initForWritingToArchive:(id)arg1 ;
-(void)setDistribution:(id)arg1 ;
-(char)setDistributionFromContainer:(id)arg1 ;
-(char)storeResourcesAtPath:(id)arg1 forLocalization:(id)arg2 ;
-(char)commitReturningError:(id*)arg1 ;
-(char)setResourceData:(id)arg1 forKey:(id)arg2 forLocalization:(id)arg3 ;
-(char)setStringsData:(id)arg1 forLocalization:(id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
