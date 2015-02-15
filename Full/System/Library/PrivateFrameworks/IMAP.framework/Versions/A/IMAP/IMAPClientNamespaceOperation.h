/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMAP.framework/Versions/A/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/IMAPSingleClientOperation.h>

@protocol IMAPAccount;
@class NSString, NSArray;

@interface IMAPClientNamespaceOperation : IMAPSingleClientOperation {

	id<IMAPAccount> _account;
	NSString* _separatorChar;
	NSArray* _privateNamespaces;
	NSArray* _publicNamespaces;
	NSArray* _sharedNamespaces;

}

@property (nonatomic,retain) id<IMAPAccount> account;                //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * separatorChar;                 //@synthesize separatorChar=_separatorChar - In the implementation block
@property (nonatomic,copy) NSArray * privateNamespaces;              //@synthesize privateNamespaces=_privateNamespaces - In the implementation block
@property (nonatomic,copy) NSArray * publicNamespaces;               //@synthesize publicNamespaces=_publicNamespaces - In the implementation block
@property (nonatomic,copy) NSArray * sharedNamespaces;               //@synthesize sharedNamespaces=_sharedNamespaces - In the implementation block
-(id)activityString;
-(NSString *)separatorChar;
-(id)init;
-(id<IMAPAccount>)account;
-(void)setAccount:(id<IMAPAccount>)arg1 ;
-(id)commandTypeString;
-(char)executeOnConnection:(id)arg1 ;
-(long long)minRequiredConnectionState;
-(long long)maxAllowedConnectionState;
-(char)shouldSendAgainOnError;
-(id)initWithAccount:(id)arg1 separatorChar:(id)arg2 ;
-(void)setSeparatorChar:(NSString *)arg1 ;
-(NSArray *)privateNamespaces;
-(void)setPrivateNamespaces:(NSArray *)arg1 ;
-(NSArray *)publicNamespaces;
-(void)setPublicNamespaces:(NSArray *)arg1 ;
-(NSArray *)sharedNamespaces;
-(void)setSharedNamespaces:(NSArray *)arg1 ;
@end

