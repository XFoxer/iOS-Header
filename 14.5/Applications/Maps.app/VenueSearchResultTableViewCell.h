//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SearchResultTableViewCell.h"

@protocol VenueSearchResultTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VenueSearchResultTableViewCell : SearchResultTableViewCell
{
    id <VenueSearchResultTableViewCellDelegate> _venuesDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VenueSearchResultTableViewCellDelegate> venuesDelegate; // @synthesize venuesDelegate=_venuesDelegate;
- (void)setTrailingMarginDelta:(double)arg1;
- (double)leadingMargin;
- (double)trailingMargin;
- (void)getDefaultImage:(CDUnknownBlockType)arg1;
- (id)attributedSubtitleString;
- (id)attributedSecondPartDetailString;
- (id)attributedFirstPartDetailString;
- (_Bool)shouldShowFallbackToAddressAndDistance;
- (void)prepareForReuse;

@end

