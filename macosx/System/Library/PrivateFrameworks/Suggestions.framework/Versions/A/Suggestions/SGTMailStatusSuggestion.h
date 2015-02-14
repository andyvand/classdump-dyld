/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Suggestions/SGTSuggestion.h>

@interface SGTMailStatusSuggestion : SGTSuggestion

@property (readonly) long long statusType; 
+(void)initialize;
+(id)displayNameForStatusType:(long long)arg1 ;
+(id)mailStatusCategory;
+(id)displayNameForMenuForStatusType:(long long)arg1 ;
+(id)queryStringForStatusType:(long long)arg1 ;
+(id)statusMatchingInput:(id)arg1 ;
+(id)statusImageForStatusType:(long long)arg1 ;
+(id)mailStatusSuggestionWithStatusType:(long long)arg1 ;
-(long long)scope;
-(id)_identifier;
-(id)queryStringFragment;
-(id)scopes;
-(char)_shouldNotBeIncludedInRecents;
-(id)_propertyListRepresentation;
-(id)displayNameForMenu;
-(id)tokenImage;
-(id)tokenTitle;
-(id)initWithStatusType:(long long)arg1 ;
-(long long)statusType;
@end

