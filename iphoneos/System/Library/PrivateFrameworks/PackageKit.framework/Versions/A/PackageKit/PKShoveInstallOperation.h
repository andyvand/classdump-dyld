/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@interface PKShoveInstallOperation : PKInstallOperation
-(int)installState;
-(id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 ;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(void)_moveActiveDYLDCacheIfNeeded;
-(char)_shoveExtractedRootOntoDestinationReturningError:(id*)arg1 ;
-(void)main;
@end

