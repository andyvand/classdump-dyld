/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/AppContainer.framework/Versions/A/AppContainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppContainer/ASBContainerAction.h>

@class NSString;

@interface ASBContainerActionCopy : ASBContainerAction {

	NSString* _sourceSpec;
	NSString* _destSpec;

}
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(char)performWithContainer:(id)arg1 usingFileManager:(id)arg2 error:(id*)arg3 ;
@end

