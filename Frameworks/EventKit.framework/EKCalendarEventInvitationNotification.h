/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {
    BOOL  _allDay;
    BOOL  _attendeeReplyChanged;
    NSArray * _attendees;
    BOOL  _dateChanged;
    NSDate * _endDate;
    NSString * _invitedBy;
    NSString * _location;
    BOOL  _locationChanged;
    EKCalendarEventInvitationNotificationAttendee * _owner;
    int  _participationStatus;
    NSDate * _participationStatusModifiedDate;
    EKRecurrenceRule * _recurrenceRule;
    NSDate * _startDate;
    NSDate * _startDateForNextOccurrence;
    int  _status;
    BOOL  _timeChanged;
    NSTimeZone * _timeZone;
}

@property (getter=isAllDay, nonatomic) BOOL allDay;
@property (nonatomic) BOOL attendeeReplyChanged;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic) BOOL couldBeJunk;
@property (nonatomic) BOOL dateChanged;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly) NSString *invitedBy;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) BOOL locationChanged;
@property (nonatomic, retain) EKCalendarEventInvitationNotificationAttendee *owner;
@property (nonatomic) int participationStatus;
@property (nonatomic, retain) NSDate *participationStatusModifiedDate;
@property (nonatomic, retain) EKRecurrenceRule *recurrenceRule;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *startDateForNextOccurrence;
@property (nonatomic) int status;
@property (nonatomic) BOOL timeChanged;
@property (nonatomic, retain) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (void).cxx_destruct;
- (BOOL)attendeeReplyChanged;
- (id)attendees;
- (BOOL)dateChanged;
- (id)endDate;
- (id)eventFromEventStore:(id)arg1;
- (BOOL)hasRecurrenceRules;
- (id)initWithEvent:(id)arg1;
- (id)invitedBy;
- (BOOL)isAllDay;
- (id)location;
- (BOOL)locationChanged;
- (id)owner;
- (int)participationStatus;
- (id)participationStatusModifiedDate;
- (id)recurrenceRule;
- (void)setAllDay:(BOOL)arg1;
- (void)setAttendeeReplyChanged:(BOOL)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDateChanged:(BOOL)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(BOOL)arg1;
- (void)setOwner:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimeChanged:(BOOL)arg1;
- (void)setTimeZone:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (int)status;
- (BOOL)timeChanged;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_allDescriptionStringsRankedByImportance:(BOOL)arg1 options:(unsigned int)arg2;
- (id)_attachmentString;
- (id)_attendeeReplyStringWithOptions:(unsigned int)arg1;
- (id)_attendeeString:(unsigned int)arg1;
- (id)_dateString:(unsigned int)arg1;
- (id)_errorString:(unsigned int)arg1;
- (id)_locationString:(unsigned int)arg1;
- (id)_organizerString:(unsigned int)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned int)arg1;
- (id)importantDescriptionStringWithOptions:(unsigned int)arg1;
- (BOOL)supportsDisplay;

@end
