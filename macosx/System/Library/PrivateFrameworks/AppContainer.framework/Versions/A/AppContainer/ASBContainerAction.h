/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface ASBContainerAction : NSObject
+(id)actionMoveFrom:(id)arg1 to:(id)arg2 ;
+(id)actionMoveContentsOf:(id)arg1 to:(id)arg2 ;
+(id)actionCopyFrom:(id)arg1 to:(id)arg2 ;
+(id)actionCopyContentsOf:(id)arg1 to:(id)arg2 ;
+(id)actionSymlinkTo:(id)arg1 as:(id)arg2 ;
+(id)actionUnlink:(id)arg1 ;
+(id)actionMakeDirectory:(id)arg1 ;
+(id)actionBackupExclude:(id)arg1 ;
+(id)evaluatePathSpecification:(id)arg1 withContainer:(id)arg2 usingFileManager:(id)arg3 error:(id*)arg4 ;
+(id)actionWithName:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
+(id)actionUnsharePreferenceDomain:(id)arg1 ;
-(id)description;
-(char)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
@end

