//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class MacTrafficIncidentsOverviewCellModel, UILabel;

__attribute__((visibility("hidden")))
@interface MacTrafficIncidentsOverviewCell : MKTableViewCell
{
    UILabel *_overviewLabel;
    MacTrafficIncidentsOverviewCellModel *_cellModel;
}

+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) MacTrafficIncidentsOverviewCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UILabel *overviewLabel; // @synthesize overviewLabel=_overviewLabel;
- (void)_updateLabels;
- (void)configureWithCellModel:(id)arg1;
- (void)_createConstraints;
- (void)_createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

