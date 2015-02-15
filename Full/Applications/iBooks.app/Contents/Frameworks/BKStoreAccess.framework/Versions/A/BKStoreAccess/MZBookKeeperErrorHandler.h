/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/Frameworks/BKStoreAccess.framework/Versions/A/BKStoreAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MZBookKeeperErrorHandler : NSObject {

	NSMutableDictionary* _handles;

}

@property (nonatomic,retain) NSMutableDictionary * handles;              //@synthesize handles=_handles - In the implementation block
-(id)noStoreAccountHandle;
-(void)setHandle:(id)arg1 forErrorDomain:(id)arg2 code:(long long)arg3 ;
-(id)storeAccountNeedSignInHandle;
-(id)storeAccountMismatchHandle;
-(id)handleKeyForErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)handleForErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)initWithGenericHandles;
-(id)allHandles;
-(char)canHandleError:(id)arg1 ;
-(void)handleError:(id)arg1 withController:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setHandles:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)handles;
@end
