import { TestBed } from '@angular/core/testing';

import { ServicioCService } from './servicio-c.service';

describe('ServicioCService', () => {
  let service: ServicioCService;

  beforeEach(() => {
    TestBed.configureTestingModule({});
    service = TestBed.inject(ServicioCService);
  });

  it('should be created', () => {
    expect(service).toBeTruthy();
  });
});
