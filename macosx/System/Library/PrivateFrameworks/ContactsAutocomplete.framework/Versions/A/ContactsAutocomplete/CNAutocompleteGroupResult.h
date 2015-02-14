/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/Versions/A/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class CNGroupIdentifier;

@interface CNAutocompleteGroupResult : CNAutocompleteResult {

	CNGroupIdentifier* _groupIdentifier;

}

@property (copy,readonly) CNGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(id)resultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 ;
-(CNGroupIdentifier *)groupIdentifier;
@end

