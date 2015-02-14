/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSUserNotification.h>

@class NSString, NSURL, NSData, NSDate, NSTimeZone, NSDateComponents, NSUserNotificationAction, NSArray;

@interface _NSConcreteUserNotification : NSUserNotification {

	NSString* _title;
	NSString* _subtitle;
	NSString* _dateString;
	NSString* _informativeText;
	NSString* _actionButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundName;
	NSString* _identifier;
	NSString* _proxyIdentifier;
	NSString* _responsePlaceholder;
	NSURL* _imageURL;
	NSData* _encodedUserInfo;
	NSData* _encodedResponse;
	NSDate* _deliveryDate;
	NSTimeZone* _deliveryTimeZone;
	NSDateComponents* _deliveryRepeatInterval;
	NSDateComponents* _deliveryExpiration;
	NSDateComponents* _duration;
	NSDate* _eventDate;
	NSData* _contentImageData;
	NSData* _identityImageData;
	NSUserNotificationAction* _additionalActivationAction;
	unsigned long long _identityImageStyle;
	NSArray* _additionalActions;
	double _snoozeInterval;
	double _snoozedDate;
	NSArray* _alternateActionButtonTitles;
	unsigned long long _alternateActionIndex;
	NSDate* _actualDeliveryDate;
	id _storageID;
	unsigned long long _style;
	unsigned long long _displayStyle;
	long long _activationType;
	unsigned long long _badgeCount;
	char _hasActionButton;
	char _presented;
	char _snoozed;
	char _remote;
	char _clearable;
	char _allDayEvent;
	char _actionButtonIsSnooze;
	char _dismissAfterDuration;
	char _persistent;
	char _poofsOnCancel;
	char _ignoresDoNotDisturb;
	char _hasReplyButton;
	char _showsButtons;
	char _lockscreenOnly;
	char _substitutesEmojiInResponse;
	char _hasAttachment;
	char _alwaysShowAlternateActionMenu;

}
-(void)_setActualDeliveryDate:(id)arg1 ;
-(void)_setPresented:(char)arg1 ;
-(id)_nextFireDate;
-(void)_setSnoozed:(char)arg1 ;
-(void)_setSnoozeInterval:(double)arg1 ;
-(void)_setSnoozedDate:(double)arg1 ;
-(void)_setActivationType:(long long)arg1 ;
-(char)_areIdentifiersEqual:(id)arg1 ;
-(void)setContentImage:(id)arg1 ;
-(char)_hasContentImage;
-(void)_setIdentityImage:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_identityImageData;
-(id)_subtitle;
-(char)_isRemote;
-(void)set_subtitle:(id)arg1 ;
-(id)actionButtonTitle;
-(id)otherButtonTitle;
-(void)set_imageURL:(id)arg1 ;
-(id)_identityImage;
-(void)_setResponse:(id)arg1 ;
-(void)setDeliveryRepeatInterval:(id)arg1 ;
-(void)setRemote:(char)arg1 ;
-(char)_identityImageHasBorder;
-(id)contentImage;
-(void)_setAlternateActionIndex:(unsigned long long)arg1 ;
-(void)_setAdditionalActivationAction:(id)arg1 ;
-(void)setAdditionalActions:(id)arg1 ;
-(char)hasActionButton;
-(char)hasReplyButton;
-(void)setHasReplyButton:(char)arg1 ;
-(id)_proxyIdentifier;
-(void)set_proxyIdentifier:(id)arg1 ;
-(id)_imageURL;
-(void)setDeliveryTimeZone:(id)arg1 ;
-(id)deliveryRepeatInterval;
-(id)actualDeliveryDate;
-(char)isPresented;
-(id)_storageID;
-(void)set_storageID:(id)arg1 ;
-(char)_clearable;
-(void)set_clearable:(char)arg1 ;
-(unsigned long long)_style;
-(unsigned long long)_displayStyle;
-(void)set_displayStyle:(unsigned long long)arg1 ;
-(char)_snoozed;
-(double)_snoozedDate;
-(unsigned long long)_badgeCount;
-(void)set_badgeCount:(unsigned long long)arg1 ;
-(void)set_dateString:(id)arg1 ;
-(id)_deliveryExpiration;
-(char)_isAllDayEvent;
-(char)_actionButtonIsSnooze;
-(char)_dismissAfterDuration;
-(char)_persistent;
-(void)set_persistent:(char)arg1 ;
-(char)_poofsOnCancel;
-(void)set_poofsOnCancel:(char)arg1 ;
-(char)_ignoresDoNotDisturb;
-(void)set_ignoresDoNotDisturb:(char)arg1 ;
-(unsigned long long)_identityImageStyle;
-(void)set_identityImageStyle:(unsigned long long)arg1 ;
-(id)responsePlaceholder;
-(void)setResponsePlaceholder:(id)arg1 ;
-(id)_alternateActionButtonTitles;
-(void)set_alternateActionButtonTitles:(id)arg1 ;
-(unsigned long long)_alternateActionIndex;
-(char)_showsButtons;
-(void)set_showsButtons:(char)arg1 ;
-(char)_lockscreenOnly;
-(void)set_lockscreenOnly:(char)arg1 ;
-(char)_substitutesEmojiInResponse;
-(void)set_substitutesEmojiInResponse:(char)arg1 ;
-(char)_hasAttachment;
-(void)set_hasAttachment:(char)arg1 ;
-(char)_alwaysShowAlternateActionMenu;
-(void)set_alwaysShowAlternateActionMenu:(char)arg1 ;
-(id)additionalActivationAction;
-(id)additionalActions;
-(id)init;
-(void)dealloc;
-(void)setDuration:(id)arg1 ;
-(id)duration;
-(id)description;
-(id)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setInformativeText:(id)arg1 ;
-(id)title;
-(id)informativeText;
-(char)isRemote;
-(id)subtitle;
-(void)setSubtitle:(id)arg1 ;
-(id)_dateString;
-(id)soundName;
-(void)setSoundName:(id)arg1 ;
-(id)_eventDate;
-(void)setDeliveryDate:(id)arg1 ;
-(void)setActionButtonTitle:(id)arg1 ;
-(void)set_style:(unsigned long long)arg1 ;
-(void)set_actionButtonIsSnooze:(char)arg1 ;
-(void)set_deliveryExpiration:(id)arg1 ;
-(void)set_allDayEvent:(char)arg1 ;
-(void)set_eventDate:(id)arg1 ;
-(void)set_dismissAfterDuration:(char)arg1 ;
-(void)set_identityImage:(id)arg1 ;
-(void)set_identityImageHasBorder:(char)arg1 ;
-(void)setHasActionButton:(char)arg1 ;
-(void)setOtherButtonTitle:(id)arg1 ;
-(double)_snoozeInterval;
-(id)deliveryTimeZone;
-(id)deliveryDate;
-(long long)activationType;
-(id)response;
@end

