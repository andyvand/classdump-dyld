/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:14:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PreferencePanes/Accounts.prefPane/Contents/MacOS/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Accounts/MobilityGatherItemsProtocol.h>

@class NSMutableArray;

@interface NetworkHomeItemsHelper : NSObject <MobilityGatherItemsProtocol> {

	NSMutableArray* fItems;

}
-(void)addAuxPath:(id)arg1 withIcon:(id)arg2 withDisplayName:(id)arg3 ;
-(void)addExistingPath:(id)arg1 withDisplayName:(id)arg2 ;
-(BOOL)containsPath:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)init;
@end
