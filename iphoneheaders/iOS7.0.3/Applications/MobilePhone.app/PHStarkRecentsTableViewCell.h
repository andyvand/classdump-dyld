/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/PHStarkGenericTableViewCell.h>

@class UILabel, UIDateLabel, NSLayoutConstraint, PHStarkLozengeLabel;

@interface PHStarkRecentsTableViewCell : PHStarkGenericTableViewCell {

	UILabel* _nameLabel;
	UILabel* _phoneNumberTypeLabel;
	UIDateLabel* _dateLabel;
	NSLayoutConstraint* _nameLabelVerticalLayoutConstraint;
	NSLayoutConstraint* _dateLabelVerticalLayoutConstraint;
	PHStarkLozengeLabel* _missedCallLabel;

}

@property (retain) UILabel * nameLabel;                                                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (retain) UILabel * phoneNumberTypeLabel;                                      //@synthesize phoneNumberTypeLabel=_phoneNumberTypeLabel - In the implementation block
@property (retain) UIDateLabel * dateLabel;                                             //@synthesize dateLabel=_dateLabel - In the implementation block
@property (retain) NSLayoutConstraint * nameLabelVerticalLayoutConstraint;              //@synthesize nameLabelVerticalLayoutConstraint=_nameLabelVerticalLayoutConstraint - In the implementation block
@property (retain) NSLayoutConstraint * dateLabelVerticalLayoutConstraint;              //@synthesize dateLabelVerticalLayoutConstraint=_dateLabelVerticalLayoutConstraint - In the implementation block
@property (retain) PHStarkLozengeLabel * missedCallLabel;                               //@synthesize missedCallLabel=_missedCallLabel - In the implementation block
-(void)setRepresentedRecentCall:(id)arg1 ;
-(void)setPhoneNumberTypeLabel:(id)arg1 ;
-(id)phoneNumberTypeLabel;
-(void)setDateLabelVerticalLayoutConstraint:(id)arg1 ;
-(id)dateLabelVerticalLayoutConstraint;
-(void)setNameLabelVerticalLayoutConstraint:(id)arg1 ;
-(id)nameLabelVerticalLayoutConstraint;
-(id)missedCallLabel;
-(void)setMissedCallLabel:(id)arg1 ;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setDateLabel:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)dateLabel;
@end
