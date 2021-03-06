/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <Calendar/CalUICalendarListViewNode.h>

@protocol CalUICalendarListViewNode;
@class NSString, NSURL, NSMutableArray, NSColor;

@interface CalUICalendarListCategory : NSObject <CalUICalendarListViewNode> {

	char _isReorderable;
	int _order;
	NSString* _title;
	id<CalUICalendarListViewNode> _backingGroup;
	NSMutableArray* _nodes;
	long long _isCalendarChecked;
	NSColor* _color;
	NSString* _uid;

}

@property (retain) id<CalUICalendarListViewNode> backingGroup;               //@synthesize backingGroup=_backingGroup - In the implementation block
@property (nonatomic,readonly) char isReorderable;                           //@synthesize isReorderable=_isReorderable - In the implementation block
@property (retain) NSMutableArray * nodes;                                   //@synthesize nodes=_nodes - In the implementation block
@property (assign) long long isCalendarChecked;                              //@synthesize isCalendarChecked=_isCalendarChecked - In the implementation block
@property (assign) int order;                                                //@synthesize order=_order - In the implementation block
@property (retain) NSColor * color;                                          //@synthesize color=_color - In the implementation block
@property (copy) NSString * uid;                                             //@synthesize uid=_uid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) char isFamilyCalendar; 
@property (nonatomic,readonly) char isDeletable; 
@property (nonatomic,readonly) char isRenameable; 
@property (nonatomic,readonly) char isColorEditable; 
@property (nonatomic,readonly) NSURL * publishURL; 
-(unsigned long long)numberOfChildNodes;
-(id)childNodeAtIndex:(unsigned long long)arg1 ;
-(char)isCalendarGroup;
-(char)isCalendarType;
-(char)isLocalCalendar;
-(char)isLocalCalendarGroup;
-(char)isBirthdayCalendar;
-(char)isWritableCalendar;
-(char)isRemoteCalendarOrGroup;
-(char)isCalendarDelegate;
-(id)dataSourceContextForEditing;
-(char)isError;
-(long long)calendarListNotificationCount;
-(void)addChildNodes:(id)arg1 ;
-(void)removeChildNode:(id)arg1 ;
-(void)removeChildNodes:(id)arg1 ;
-(char)isReorderable;
-(id)initWithTitle:(id)arg1 uid:(id)arg2 isReorderable:(char)arg3 ;
-(id<CalUICalendarListViewNode>)backingGroup;
-(void)setBackingGroup:(id<CalUICalendarListViewNode>)arg1 ;
-(id)initWithBackingNode:(id)arg1 uid:(id)arg2 isReorderable:(char)arg3 ;
-(void)setChildNodes:(id)arg1 ;
-(long long)isCalendarChecked;
-(void)setIsCalendarChecked:(long long)arg1 ;
-(unsigned long long)numberOfChildren;
-(id)displayTitle;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(char)isBusy;
-(char)isExpandable;
-(id)groupTitle;
-(id)symbolicColor;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(char)isEditable;
-(long long)compare:(id)arg1 ;
-(id)childNodes;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(id)parentNode;
-(NSString *)uid;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(char)isExchange;
-(char)isCalDAV;
-(id)accountID;
-(void)setUid:(NSString *)arg1 ;
-(char)isEnabledForCalendar;
-(char)isSubscribed;
-(char)isRefreshable;
-(char)isRenameable;
-(char)isColorEditable;
-(char)supportsPublishing;
-(char)isFacebookBirthdayCalendar;
-(id)sharees;
-(char)isShared;
-(char)isCalDAVPublished;
-(NSURL *)publishURL;
-(char)isAffectingAvailability;
-(char)supportsSharing;
-(char)isFamilyCalendar;
-(char)isSharedToMe;
-(char)isSharedByMe;
-(char)supportsCalDAVPublish;
-(char)hasSharees;
-(char)isDeletable;
-(char)isPublished;
-(void)updateOrderToLastOrder;
-(void)updateOrderToOrder:(int)arg1 ;
-(char)isGroup;
-(NSMutableArray *)nodes;
-(void)addChildNode:(id)arg1 ;
@end

