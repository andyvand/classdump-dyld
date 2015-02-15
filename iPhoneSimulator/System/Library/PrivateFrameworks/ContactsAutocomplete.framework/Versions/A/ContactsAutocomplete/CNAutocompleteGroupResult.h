/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:42 PM Central European Standard Time
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

