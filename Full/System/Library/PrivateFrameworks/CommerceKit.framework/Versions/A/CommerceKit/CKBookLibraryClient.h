/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CommerceKit.framework/Versions/A/CommerceKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommerceKit/ISBookLibraryObserver.h>

@interface CKBookLibraryClient : NSObject <ISBookLibraryObserver> {

	long long _libraryType;
	/*^block*/id _observerBlock;

}

@property (assign) long long libraryType;              //@synthesize libraryType=_libraryType - In the implementation block
@property (copy) id observerBlock;                     //@synthesize observerBlock=_observerBlock - In the implementation block
-(void)setObserverBlock:(id)arg1 ;
-(id)observerBlock;
-(long long)libraryType;
-(void)setLibraryType:(long long)arg1 ;
-(void)bookLibraryHasAdded:(id)arg1 changed:(id)arg2 removed:(id)arg3 ;
@end

