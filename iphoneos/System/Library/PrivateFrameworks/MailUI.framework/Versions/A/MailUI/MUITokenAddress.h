/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <MailUI/CNAutocompleteFetchDelegate.h>
#import <MailUI/NSCopying.h>

@protocol MUITokenAddressDelegate, CNCancelable;
@class NSTokenField, NSTextView, CNContact, ABGroup, NSString;

@interface MUITokenAddress : NSObject <CNAutocompleteFetchDelegate, NSCopying> {

	char _shouldRefreshNameIfPossible;
	id<MUITokenAddressDelegate> _delegate;
	NSTokenField* _tokenField;
	NSTextView* _textView;
	CNContact* _contact;
	ABGroup* _group;
	NSString* _recentRawAddress;
	NSString* _recentName;
	NSString* _currentRawAddress;
	NSString* _currentName;
	long long _tokenStyle;
	id<CNCancelable> _autocompletionSearchRequest;

}

@property (assign,nonatomic,__weak) id<MUITokenAddressDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSTokenField * tokenField;                          //@synthesize tokenField=_tokenField - In the implementation block
@property (assign,nonatomic) NSTextView * textView;                                     //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) ABGroup * group;                                           //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * recentRawAddress;                                 //@synthesize recentRawAddress=_recentRawAddress - In the implementation block
@property (nonatomic,copy) NSString * recentName;                                       //@synthesize recentName=_recentName - In the implementation block
@property (nonatomic,copy) NSString * currentRawAddress;                                //@synthesize currentRawAddress=_currentRawAddress - In the implementation block
@property (nonatomic,copy) NSString * currentName;                                      //@synthesize currentName=_currentName - In the implementation block
@property (assign,nonatomic) long long tokenStyle;                                      //@synthesize tokenStyle=_tokenStyle - In the implementation block
@property (nonatomic,readonly) char isExternal; 
@property (assign,nonatomic) char shouldRefreshNameIfPossible;                          //@synthesize shouldRefreshNameIfPossible=_shouldRefreshNameIfPossible - In the implementation block
@property (nonatomic,retain) id<CNCancelable> autocompletionSearchRequest;              //@synthesize autocompletionSearchRequest=_autocompletionSearchRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)writeTokens:(id)arg1 toPasteboard:(id)arg2 ;
+(id)tokenWithAddress:(id)arg1 isRecent:(char)arg2 contact:(id)arg3 ;
+(char)addressIsExternal:(id)arg1 ;
+(id)_contactsCache;
+(id)tokenWithAddress:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsExternal;
-(ABGroup *)group;
-(id)initWithAddress:(id)arg1 isRecent:(char)arg2 contact:(id)arg3 ;
-(void)getRecordFromAddress;
-(id)expandedTokens;
-(id)displayStringWithMode:(long long)arg1 ;
-(void)_getAddressAndNameFromRecord;
-(void)_muiTokenAddressCommonInit;
-(NSString *)currentName;
-(NSString *)currentRawAddress;
-(NSString *)recentName;
-(NSString *)recentRawAddress;
-(id)_formattedCurrentAddress;
-(id)_contactNameFormatter;
-(id)suggestionWithGenius:(id)arg1 ;
-(id)_suggestionSerializedRepresentation;
-(char)_writeToPasteboard:(id)arg1 type:(id)arg2 forceAddressOnly:(char)arg3 ;
-(void)_writeToPasteboard:(id)arg1 forceAddressOnly:(char)arg2 ;
-(void)_getRecordFromAddress;
-(void)setAutocompletionSearchRequest:(id<CNCancelable>)arg1 ;
-(id)_contactForEmail:(id)arg1 ;
-(char)shouldRefreshNameIfPossible;
-(void)setCurrentName:(NSString *)arg1 ;
-(void)setShouldRefreshNameIfPossible:(char)arg1 ;
-(void)_refreshToken;
-(void)setRecentRawAddress:(NSString *)arg1 ;
-(void)setRecentName:(NSString *)arg1 ;
-(id)_contactsOperationQueue;
-(id<CNCancelable>)autocompletionSearchRequest;
-(void)setCurrentRawAddress:(NSString *)arg1 ;
-(void)changeAddress:(id)arg1 ;
-(void)editAddress:(id)arg1 ;
-(void)removeAddress:(id)arg1 ;
-(void)copyAddressToClipboard:(id)arg1 ;
-(void)removeFromVIPSenders:(id)arg1 ;
-(void)addToVIPSenders:(id)arg1 ;
-(void)openNewMessage:(id)arg1 ;
-(void)expandGroupAddress:(id)arg1 ;
-(void)removeFromAddressHistory:(id)arg1 ;
-(void)openPersonCard:(id)arg1 ;
-(void)openInContacts:(id)arg1 ;
-(void)searchForToken:(id)arg1 ;
-(id)_tokenForTokenAddress:(id)arg1 ;
-(id)_formattedRecentAddress;
-(id)toolTipWithMode:(long long)arg1 ;
-(char)writeToPasteboard:(id)arg1 type:(id)arg2 ;
-(void)addToContacts:(id)arg1 ;
-(void)setTokenField:(NSTokenField *)arg1 ;
-(NSTokenField *)tokenField;
-(void)_contactsChanged:(id)arg1 ;
-(id)formattedAddress;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(char)isExternal;
-(id)init;
-(void)setDelegate:(id<MUITokenAddressDelegate>)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<MUITokenAddressDelegate>)delegate;
-(id)menu;
-(char)validateMenuItem:(id)arg1 ;
-(void)setTextView:(NSTextView *)arg1 ;
-(NSTextView *)textView;
-(void)writeToPasteboard:(id)arg1 ;
-(id)writablePasteboardTypes;
-(long long)tokenStyle;
-(void)setTokenStyle:(long long)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setGroup:(ABGroup *)arg1 ;
-(id)initWithGroup:(id)arg1 ;
@end

